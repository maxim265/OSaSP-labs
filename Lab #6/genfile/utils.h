#ifndef LAB6_UTILS_H
#define LAB6_UTILS_H

#include <stdint.h>
#include <stddef.h>

const char PROJECT[] = "";
const char GENFILES_PATH[] = "/generated_files/";

typedef struct {
    double time_mark;
    uint64_t recno;
} index_s;

typedef struct {
    uint64_t records;
    index_s idx[10000000];
} index_hdr_s;

#endif //LAB6_UTILS_H