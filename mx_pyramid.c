void mx_printchar(char c);

static void printnchar(char c, int n) {
    for (int i = 0; i < n; i++) {
        mx_printchar(c);
    }
}

static void front(int n, int i) {
    char fill = ' ';
    
    if (i == n - 1) {
        fill = '_';
    }

    printnchar(' ', n - i - 1);
    mx_printchar('/');
    printnchar(fill, i * 2 - 1);

    if (i > 0)
        mx_printchar('\\');
}

static void side(int n, int i) {
    char edge = '\\';
    int space = i;

    if (i >= n / 2) {
        edge = '|';
        space = n - i - 1;
    }

    printnchar(' ', space);
    mx_printchar(edge);
}

void mx_pyramid(int n) {
    if (n < 2 || n % 2 == 1) {
        return;
    }

    for (int i = 0; i < n; i++) {
        front(n, i);
        side(n, i);
        mx_printchar('\n');
    }
}





