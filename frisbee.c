#include "types.h"
#include "stat.h"
#include "user.h"

void player(void *arg_ptr);

int main(int argc, char* argv[])
{
    int i;
    int players = (int) argv[0];
    int passes = (int) argv[1];

    for (i = 0; i < players; i++) {
        thread_create(player, (void*)&i);
    }
    exit();
}
