#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "fruit_bot.h"

// return how many "Mars Bars" the bot's has on_board

int mars_bars_on_board(struct bot *b) {
    
    assert(strcmp("Mars Bars", b->fruit) == 0);

    return b->fruit_kg;
}

int mars_bars_for_sale(struct bot *b) {

    assert(strcmp("Mar Bars", b->location->fruit) == 0);

    return b->location->quantity;
}