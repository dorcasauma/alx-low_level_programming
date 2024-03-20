#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>

// ELF Header constants
#define EI_NIDENT 16

// ELF Header structure
typedef struct {
    unsigned char e_ident[EI_NIDENT];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

// ELF Identification constants
#define ELFMAG0 0x7f
#define ELFMAG1 'E'
#define ELFMAG2 'L'
#define ELFMAG3 'F'
#define ELFCLASS32 1
#define ELFCLASS64 2
#define ELFDATA2LSB 1
#define ELFDATA2MSB 2
#define ET_NONE 0
#define ET_REL 1
#define ET_EXEC 2
#define ET_DYN 3
#define ET_CORE 4
#define ELFOSABI_SYSV 0
#define ELFOSABI_LINUX 3

void print_magic(const unsigned char *magic) {
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", magic[i]);
    }
    printf("\n");
}

void print_class(uint8_t elf_class) {
    printf("  Class:                             ");
    if (elf_class == ELFCLASS32) {
        printf("ELF32\n");
    } else if (elf_class == ELFCLASS64) {
        printf("ELF64\n");
    } else {
        printf("Invalid class\n");
    }
}

void print_data(uint8_t data_encoding) {
    printf("  Data:                              ");
    if (data_encoding == ELFDATA2LSB) {
        printf("2's complement, little endian\n");
    } else if (data_encoding == ELFDATA2MSB) {
        printf("2's complement, big endian\n");
    } else {
        printf("Invalid data encoding\n");
    }
}

void print_version(uint8_t version) {
    printf("  Version:                           %d (current)\n", version);
}

void print_os_abi(uint8_t os_abi) {
    printf("  OS/ABI:                            ");
    if (os_abi == ELFOSABI_SYSV) {
        printf("UNIX - System V\n");
    } else if (os_abi == ELFOSABI_LINUX) {
        printf("UNIX - Linux\n");
    } else {
        printf("Unknown\n");
    }
}

void print_type(uint16_t elf_type) {
    printf("  Type:                              ");
    if (elf_type == ET_NONE) {
        printf("NONE (No file type)\n");
    } else if (elf_type == ET_REL) {
        printf("REL (Relocatable file)\n");
    } else if (elf_type == ET_EXEC) {
        printf("EXEC (Executable file)\n");
    } else if (elf_type == ET_DYN) {
        printf("DYN (Shared object file)\n");
    } else if (elf_type == ET_CORE) {
        printf("CORE (Core file)\n");
    } else {
        printf("Unknown\n");
    }
}

void print_entry_point(uint64_t entry_point) {
    printf("  Entry point address:               %#llx\n", entry_point);
}

int main(int argc, char *argv[]) {
    const char *filename;
    int fd;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 1;
    }

    filename = argv[1];

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error");
        return 1;
    }

    unsigned char elf_magic[EI_NIDENT];
    if (read(fd, elf_magic, EI_NIDENT) != EI_NIDENT) {
        perror("Error");
        close(fd);
        return 1;
    }

    Elf64_Ehdr elf_header;
    if (lseek(fd, 0, SEEK_SET) == -1 || read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        perror("Error");
        close(fd);
        return 1;
    }

    printf("ELF Header:\n");

    print_magic(elf_magic);
    print_class(elf_magic[4]); // ELF class is at index 4
    print_data(elf_magic[5]);  // Data encoding is at index 5
    print_version(elf_magic[6]);
    print_os_abi(elf_magic[7]);
    print_version(elf_magic[8]);
    print_type(elf_header.e_type);
    print_entry_point(elf_header.e_entry);

    close(fd);

    return 0;
}
