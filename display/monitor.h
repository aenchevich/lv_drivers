/**
 * @file monitor.h
 *
 */

#ifndef MONITOR_H
#define MONITOR_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../../lv_drv_conf.h"
#include <stdbool.h>

#if USE_MONITOR != 0
#include "lvgl/lv_misc/lv_color.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
void monitor_init(void);
void monitor_flush(int32_t x1, int32_t y1, int32_t x2, int32_t y2, const lv_color_t *color_p);
void monitor_fill(int32_t x1, int32_t y1, int32_t x2, int32_t y2, lv_color_t color);
void monitor_map(int32_t x1, int32_t y1, int32_t x2, int32_t y2, const lv_color_t * color_p);
void monitor_deinit(void);

/**********************
 *      MACROS
 **********************/

/**********************
 *   EXPORTED VARIABLES
 **********************/
/*Query this variable to detect when a SDL QUIT input event has been detected. 
  This means user has requested to quit the app, e.g. pressed Alt-F4 or Ctrl-C,
  clicked the window close [x] button, sent a signal to the app, etc.*/
extern bool g_sdl_quit_qry;

#endif /* USE_MONITOR */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MONITOR_H */
