/* 
 * jpegtclStubInit.c --
 */

#include "jpegtcl.h"

/*
 * Remove macros that will interfere with the definitions below.
 */


/*
 * WARNING: The contents of this file is automatically generated by the
 * genStubs.tcl script. Any modifications to the function declarations
 * below should be made in the jpegtcl.decls script.
 */

/* !BEGIN!: Do not edit below this line. */

JpegtclStubs jpegtclStubs = {
    TCL_STUB_MAGIC,
    NULL,
    jpeg_std_error, /* 0 */
    jpeg_CreateCompress, /* 1 */
    jpeg_CreateDecompress, /* 2 */
    jpeg_destroy_compress, /* 3 */
    jpeg_destroy_decompress, /* 4 */
    jpeg_stdio_dest, /* 5 */
    jpeg_stdio_src, /* 6 */
    jpeg_set_defaults, /* 7 */
    jpeg_set_colorspace, /* 8 */
    jpeg_default_colorspace, /* 9 */
    jpeg_set_quality, /* 10 */
    jpeg_set_linear_quality, /* 11 */
    jpeg_add_quant_table, /* 12 */
    jpeg_quality_scaling, /* 13 */
    jpeg_simple_progression, /* 14 */
    jpeg_suppress_tables, /* 15 */
    jpeg_alloc_quant_table, /* 16 */
    jpeg_alloc_huff_table, /* 17 */
    jpeg_start_compress, /* 18 */
    jpeg_write_scanlines, /* 19 */
    jpeg_finish_compress, /* 20 */
    jpeg_write_raw_data, /* 21 */
    jpeg_write_marker, /* 22 */
    jpeg_write_m_header, /* 23 */
    jpeg_write_m_byte, /* 24 */
    jpeg_write_tables, /* 25 */
    jpeg_read_header, /* 26 */
    jpeg_start_decompress, /* 27 */
    jpeg_read_scanlines, /* 28 */
    jpeg_finish_decompress, /* 29 */
    jpeg_read_raw_data, /* 30 */
    jpeg_has_multiple_scans, /* 31 */
    jpeg_start_output, /* 32 */
    jpeg_finish_output, /* 33 */
    jpeg_input_complete, /* 34 */
    jpeg_new_colormap, /* 35 */
    jpeg_consume_input, /* 36 */
    jpeg_calc_output_dimensions, /* 37 */
    jpeg_save_markers, /* 38 */
    jpeg_set_marker_processor, /* 39 */
    jpeg_read_coefficients, /* 40 */
    jpeg_write_coefficients, /* 41 */
    jpeg_copy_critical_parameters, /* 42 */
    jpeg_abort_compress, /* 43 */
    jpeg_abort_decompress, /* 44 */
    jpeg_abort, /* 45 */
    jpeg_destroy, /* 46 */
    jpeg_resync_to_restart, /* 47 */
};

/* !END!: Do not edit above this line. */
