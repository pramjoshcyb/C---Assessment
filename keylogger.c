struct event {
    // type                 name
    char                    value;
    struct timeval          time;
};

int main(int argc, char const *argv[]) {
    // struct timeval time;

    struct event   keypress[30]; //array of size 30

    keypress[i].value = getchar(); //array of keypressers

    // NULL is a pointer to nowhere
    gettimeofday(&keypress[i].time, NULL);

    printf("Character: %c. Time: %d\n", keypress.value, keypress.time.tv_sec);

}





/* assembles a command of the form
    echo "Key '%c', at timestamp %d
    Key '%c', at timestamp %d
    Key '%c', at timestamp %d
    Key '%c', at timestamp %d
    Key"'%c', at timestamp %d
    [30 of these]
    " | nc -q 0 localhost "









    