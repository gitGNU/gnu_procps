/* top_nls.h - provide the basis for future nls translations */
/*
 * Copyright (c) 2011       by: James C. Warner
 *    All rights reserved.      8921 Hilloway Road
 *                              Eden Prairie, Minnesota 55347 USA
 *
 * This file may be used subject to the terms and conditions of the
 * GNU Library General Public License Version 2, or any later version
 * at your option, as published by the Free Software Foundation.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 */
/* For contributions to this program, the author wishes to thank:
 *    Craig Small, <csmall@small.dropbear.id.au>
 *    Sami Kerola, <kerolasa@iki.fi>
 */
#ifndef _Itop_nls
#define _Itop_nls

//#include "../include/c.h"
#include "nls.h"

        /*
         * These are our three string tables with the following contents:
         *    Desc : field descriptions not to exceed 20 screen positions
         *    Norm : regular text possibly also containing c-format specifiers
         *    Uniq : show_special specially formatted strings
         * The latter table presents the greatest translation challenge !
         */
extern const char *Desc_nlstab[];
extern const char *Norm_nlstab[];
extern const char *Uniq_nlstab[];

        /*
         * Simle optional macros to ease table access.
         * The N_txt and N_fmt macros are interchangeable but
         * highlight the two types of strings found in Norm_nlstable.
         */
#define N_fld(e) Desc_nlstab[e]
#define N_txt(e) Norm_nlstab[e]
#define N_fmt(e) Norm_nlstab[e]
#define N_unq(e) Uniq_nlstab[e]

        /*
         * These enums are the means to access two of our three tables.
         * The Desc_nlstab is accessed with standard top pflag enums.
         *
         * The norm_nls enums carry a suffix distinguishing plain text
         * from any text also containiing c-format specifiers.
         */
enum norm_nls {
   AMT_kilobyte_txt, AMT_megabyte_txt, AMT_gigabyte_txt, BAD_delayint_fmt,
   BAD_integers_txt, BAD_max_task_txt, BAD_mon_pids_fmt, BAD_niterate_arg,
   BAD_numfloat_txt, BAD_signalid_txt, BAD_username_txt, BAD_widtharg_fmt,
   CHOOSE_group_txt, COLORS_nomap_txt, DELAY_badarg_txt, DELAY_change_fmt,
   DELAY_secure_txt, DISABLED_cmd_fmt, DISABLED_win_fmt, EXIT_signals_fmt,
   FAIL_alloc_c_txt, FAIL_alloc_r_txt, FAIL_openlib_txt, FAIL_rc_open_fmt,
   FAIL_re_nice_fmt, FAIL_sigmask_fmt, FAIL_signals_fmt, FAIL_sigstop_fmt,
   FAIL_statget_txt, FAIL_statopn_fmt, FAIL_tty_get_txt, FAIL_tty_mod_fmt,
   FAIL_tty_raw_fmt, FAIL_widecpu_txt, FAIL_widepid_txt, FOREST_modes_fmt,
   FOREST_views_txt, GET_max_task_fmt, GET_nice_num_fmt, GET_pid2kill_txt,
   GET_pid2nice_txt, GET_sigs_num_fmt, GET_user_ids_txt, HELP_cmdline_fmt,
   HILIGHT_cant_txt, IRIX_curmode_fmt, LIMIT_exceed_fmt, MISSING_args_fmt,
   NAME_windows_fmt, NOT_onsecure_txt, NOT_smp_cpus_txt, OFF_one_word_txt,
   ON_word_only_txt, RC_bad_entry_fmt, RC_bad_files_fmt, SCROLL_coord_fmt,
   SELECT_clash_txt, THREADS_show_fmt, TIME_accumed_fmt, UNKNOWN_cmds_txt,
   UNKNOWN_opts_fmt, USAGE_abbrev_txt, WORD_process_txt, WORD_threads_txt,
   WRITE_rcfile_fmt, WRONG_switch_fmt,
      norm_MAX
};

enum uniq_nls {
   KEYS_helpbas_fmt, KEYS_helpext_fmt, WINDOWS_help_fmt, COLOR_custom_fmt,
   FIELD_header_fmt, MEMORY_lines_fmt, STATE_line_1_fmt, STATE_lin2x4_fmt,
   STATE_lin2x5_fmt, STATE_lin2x6_fmt, STATE_lin2x7_fmt,
      uniq_MAX
};

void initialize_nsl (void);

#endif /* _Itop_nls */

