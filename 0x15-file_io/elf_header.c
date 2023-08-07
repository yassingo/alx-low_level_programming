#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define EI_NIDENT 16

typedef struct {
    unsigned char e_ident[EI_NIDENT]; /* ELF Identification */
    unsigned short e_type;            /* Object file type */
    unsigned short e_machine;         /* Machine type */
    unsigned int e_version;           /* Object file version */
    unsigned long e_entry;            /* Entry point address */
    unsigned long e_phoff;            /* Program header offset */
    unsigned long e_shoff;            /* Section header offset */
    unsigned int e_flags;             /* Processor-specific flags */
    unsigned short e_ehsize;          /* ELF header size */
    unsigned short e_phentsize;       /* Size of program header entry */
    unsigned short e_phnum;           /* Number of program header entries */
    unsigned short e_shentsize;       /* Size of section header entry */
    unsigned short e_shnum;           /* Number of section header entries */
    unsigned short e_shstrndx;        /* Section name string table index */
} Elf32_Ehdr;

void print_error(const char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(1);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: ./elf_header <filename>");
    }

    char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Error opening file");
    }

    Elf32_Ehdr elf_header;
    ssize_t bytes_read = read(fd, &elf_header, sizeof(elf_header));
    if (bytes_read != sizeof(elf_header)) {
        print_error("Error reading ELF header");
    }

    // Print ELF header details
    printf("e_ident: ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\n");
    printf("e_type: %04x\n", elf_header.e_type);
    printf("e_machine: %04x\n", elf_header.e_machine);
    printf("e_version: %08x\n", elf_header.e_version);
    printf("e_entry: %08lx\n", elf_header.e_entry);
    printf("e_phoff: %08lx\n", elf_header.e_phoff);
    printf("e_shoff: %08lx\n", elf_header.e_shoff);
    printf("e_flags: %08x\n", elf_header.e_flags);
    printf("e_ehsize: %04x\n", elf_header.e_ehsize);
    printf("e_phentsize: %04x\n", elf_header.e_phentsize);
    printf("e_phnum: %04x\n", elf_header.e_phnum);
    printf("e_shentsize: %04x\n", elf_header.e_shentsize);
    printf("e_shnum: %04x\n", elf_header.e_shnum);
    printf("e_shstrndx: %04x\n", elf_header.e_shstrndx);

    close(fd);

    return 0;
}

