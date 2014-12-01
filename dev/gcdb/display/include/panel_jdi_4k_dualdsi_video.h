/* Copyright (c) 2014, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_JDI_4K_DUALDSI_VIDEO_H_
#define _PANEL_JDI_4K_DUALDSI_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config jdi_4k_dualdsi_video_panel_data = {
	"qcom,dsi_jdi_4k_video_0", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 1, 0, 0, 0, 0, 0, 11, 0, 0,
	"qcom,dsi_jdi_4k_video_1",
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution jdi_4k_dualdsi_video_panel_res = {
	3840, 2160, 100, 80, 12, 0, 16, 16, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info jdi_4k_dualdsi_video_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char jdi_4k_dualdsi_video_on_cmd0[] = {
	0x51, 0xff, 0x15, 0x80,
};

static char jdi_4k_dualdsi_video_on_cmd1[] = {
	0x53, 0x24, 0x15, 0x80,
};

static char jdi_4k_dualdsi_video_on_cmd2[] = {
	0x11, 0x00, 0x05, 0x80
};

static char jdi_4k_dualdsi_video_on_cmd3[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd jdi_4k_dualdsi_video_on_command[] = {
	{0x4, jdi_4k_dualdsi_video_on_cmd0, 0x78},
	{0x4, jdi_4k_dualdsi_video_on_cmd1, 0x78},
	{0x4, jdi_4k_dualdsi_video_on_cmd2, 0x78},
	{0x4, jdi_4k_dualdsi_video_on_cmd3, 0x78}
};

#define JDI_4K_DUALDSI_VIDEO_ON_COMMAND 4


static char jdi_4k_dualdsi_videooff_cmd0[] = {
	0x28, 0x00, 0x05, 0x80
};

static char jdi_4k_dualdsi_videooff_cmd1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd jdi_4k_dualdsi_video_off_command[] = {
	{0x4, jdi_4k_dualdsi_videooff_cmd0, 0x32},
	{0x4, jdi_4k_dualdsi_videooff_cmd1, 0x78}
};

#define JDI_4K_DUALDSI_VIDEO_OFF_COMMAND 2


static struct command_state jdi_4k_dualdsi_video_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info jdi_4k_dualdsi_video_command_panel = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info jdi_4k_dualdsi_video_video_panel = {
	0, 0, 0, 0, 1, 1, 1, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration jdi_4k_dualdsi_video_lane_config = {
	4, 0, 1, 1, 1, 1
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t jdi_4k_dualdsi_video_timings[] = {
	0x3e, 0x38, 0x26, 0x00, 0x68, 0x6e, 0x2a, 0x3c, 0x2c, 0x03, 0x04, 0x00
};

static struct panel_timing jdi_4k_dualdsi_video_timing_info = {
	0x0, 0x04, 0x03, 0x27
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence jdi_4k_dualdsi_video_reset_seq = {
	{1, 0, 1, }, {200, 200, 200, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight jdi_4k_dualdsi_video_backlight = {
	0, 1, 4095, 100, 1, "PMIC_8941"
};

static struct fb_compression jdi_4k_dualdsi_video_fbc = {
	1, 2, 1, 1, 2, 1, 1, 1, 1200, 5, 91, 0x200, 192, 4, 3, 0, 0, 0
};

#endif /*_PANEL_JDI_4K_DUALDSI_VIDEO_H_*/
