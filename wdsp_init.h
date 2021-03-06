/* Copyright (C)
* 2015 - John Melton, G0ORX/N6LYT
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*
*/

#ifndef _WDSP_INIT_H
#define _WDSP_INIT_H

extern void wdsp_set_input_rate(double rate);
extern void wdsp_set_offset(long long offset);
extern void setMode(int m);
extern int getMode();
extern void setFilter(int low,int high);
extern int getFilterLow();
extern int getFilterHigh();
extern void wdsp_init(int rx,int pixels,int protocol);
extern void wdsp_new_sample_rate(int rate);
extern void wdsp_set_agc(int rx, int agc);
extern void wdsp_set_deviation(double deviation);
extern void wdsp_set_pre_emphasize(int state);
#endif
