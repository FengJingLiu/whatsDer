/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"
#include "esp_log.h"

#if LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif

#define TAG "gui_event"
extern lv_ui guider_ui; 

static void screen_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ESP_LOGI(TAG, "screen_btn_1_event_handler");
		
		lv_label_set_text((&guider_ui)->screen_label_1, "screen_btn_1_event_handler");

		break;
	}
	default:
		break;
	}
}
static void screen_btn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ESP_LOGI(TAG, "screen_btn_2_event_handler");

		lv_label_set_text((&guider_ui)->screen_label_1, "screen_btn_2_event_handler");
		break;
	}
	default:
		break;
	}
}
static void screen_btn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ESP_LOGI(TAG, "screen_btn_3_event_handler");

		lv_label_set_text((&guider_ui)->screen_label_1, "screen_btn_3_event_handler");
		break;
	}
	default:
		break;
	}
}
void events_init_screen(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_btn_1, screen_btn_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_2, screen_btn_2_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_3, screen_btn_3_event_handler, LV_EVENT_ALL, ui);
}

void events_init(lv_ui *ui)
{

}
