/*
 * Unicorn 3D Printer Firmware
 * sdcard.c
*/
#include <stdio.h>
#include <stdlib.h>

#include "sdcard.h"

void sdcard_mount(void)
{
    fprintf(stderr, "sdcard_mount called.\n");
}

void sdcard_unmount(void)
{
    fprintf(stderr, "sdcard_unmount called.\n");
}

unsigned char sdcard_ismounted(void)
{
    fprintf(stderr, "sdcard_ismounted called.\n");
    return 0;
}

unsigned char sdcard_card_detected(void)
{
    fprintf(stderr, "sdcard_card_detected called.\n");
    return 0;
}

void sdcard_list_files()
{
    fprintf(stderr, "sdcard_list_files called.\n");
}

void sdcard_select_file(const char* name)
{
    fprintf(stderr, "sdcard_select_file called.\n");
}

void sdcard_capture_start()
{
    fprintf(stderr, "sdcard_capture_start called.\n");
}

void sdcard_capture_stop()
{
    fprintf(stderr, "sdcard_capture_stop called.\n");
}

unsigned char sdcard_iscapturing()
{
    fprintf(stderr, "sdcard_iscapturing called.\n");
    return 0;
}

unsigned char sdcard_write_line(const char* line)
{
    fprintf(stderr, "sdcard_write_line called.\n");
    return 0;
}

void sdcard_set_position(unsigned int filepos)
{
    fprintf(stderr, "sdcard_set_position called.\n");
}

void sdcard_print_status()
{
    fprintf(stderr, "sdcard_print_status called.\n");
}

int sdcard_get_char(unsigned char* chr)
{
    fprintf(stderr, "sdcard_get_char called.\n");
    return 0;
}

void sdcard_replay_start(void)
{
    fprintf(stderr, "sdcard_replay_start called.\n");
}

void sdcard_replay_pause(void)
{
    fprintf(stderr, "sdcard_replay_pause called.\n");
}

void sdcard_replay_stop(void)
{
    fprintf(stderr, "sdcard_replay_stop called.\n");
}

int sdcard_isreplaying(void)
{
    fprintf(stderr, "sdcard_isreplaying called.\n");
    return 0;
}

int sdcard_isreplaypaused(void)
{
    fprintf(stderr, "sdcard_isreplaypaused called.\n");
    return 0;
}

void sdcard_handle_state(void)
{
    fprintf(stderr, "sdcard_handle_state called.\n");
}
