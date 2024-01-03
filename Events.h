/******************************************************************************
Events.h
******************************************************************************/

#ifndef EVENTS_H
#define EVENTS_H

struct event_t {
    uint8_t month;
    uint8_t day;
    String text;
    uint16_t year;
    eColor color;
};

event_t events[] = {
    { 0, 0, "", 0, WHITE }, // Do not change
    { 1,  1, "Happy New Year!", 0, WHITE },
    //{ 3, 14, "Albert Einsteins birthday!", 1879, MAGENTA },
    { 12, 24, "Merry Christmas!", 0, WHITE },
    //{ 3, 12, "Qlockworks birthday!", 2017, MAGENTA }
    { 3, 16, "Happy Birthday!", 0, WHITE},
    { 12, 23, "Happy Birthday!", 0, WHITE}
};

#endif
