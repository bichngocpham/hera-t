#include "readTSV.h"

#define BUF_SIZE       1024

struct tsv_t *init_readTSV(const char *path)
{
	struct tsv_t *f;
	f = calloc(1, sizeof(struct tsv_t));

	f->f = xfopen(path, "r");
        f->buf = malloc(BUF_SIZE);
	f->row_content = calloc(1, sizeof(int));
	f->l = 0;
        f->m = 1;

	return f;
}

void destroy_readTSV(struct tsv_t *f)
{
        free(f->buf);
	free(f->row_content);
	free(f);
}

ssize_t get_row_content(struct tsv_t *f)
{
        ssize_t ret;
        int size = BUF_SIZE;
        ret = xgetline(&f->buf, &size, f->f);

        if (ret == EOF)
                return ret;

        int i;
        f->l = 0;

        for (i = 0; i < ret; ++i) {
                if (f->buf[i] != '\t')
                        continue;
                f->l += 1;
                if (f->l >= f->m){
                        f->m <<= 1;
                        f->row_content = realloc(f->row_content, (f->m + 1) * sizeof(int));
                }
                f->row_content[f->l] = i + 1;
        }
        f->l += 1;
        f->row_content[f->l] = ret + 1;
        return ret;
}

struct content_t get_col_content(struct tsv_t *f, int i)
{
        struct content_t col_content;
        if (i >= f->l) {
                col_content.l = 0;
                return col_content;
        }

        col_content.s = f->buf + f->row_content[i];
        col_content.l = f->row_content[i + 1] - f->row_content[i] - 1;

        return col_content;
}