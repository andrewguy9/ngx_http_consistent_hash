#ifndef TT_LIB_H
#define TT_LIB_H

extern "C" {
    struct tt_handle
    {
        void * ptr;
        void * ts;
    };

    int tt_init(int size, struct tt_handle * handle);
    int tt_update(int color, double delta, int time, int decay, struct tt_handle * tt);
    int tt_get(struct tt_pair * p, int size);
}

#endif
