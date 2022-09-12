void mx_printchar(char c);

static void top_and_front_face(int n, int line) {
    char filling = ' ';
    char edge = '|';

    if (line == 0 || line == n / 2 + 1 || line == 2 + n + n / 2) {
        edge = '+';
        filling = '-';
    }
    else if (line > 0 && line < n / 2 + 1) {
        edge = '/';
    }

     for (int i = 0; i < n / 2 + 1 - line; i++) {
        mx_printchar(' ');
    }
    mx_printchar(edge);
   
     for (int i = 0; i < n * 2; i++) {
        mx_printchar(filling);
    }
    mx_printchar(edge);
}

static void side_face(int n, int line) {
    char edge = '|';
    int space = n / 2;

    if (line == n + 1) {
        edge = '+';
    }
    else if (line < n / 2 + 1) {
        space = line - 1;
    }
    else if (line > n + 1) {
        space = n * 3 / 2 - line + 1;
        edge = '/';
    }

    
    for (int i = 0; i < space; i++) {
        mx_printchar(' ');
    }
    mx_printchar(edge);
}

void mx_cube(int n) {
    if (n < 2) {
        return;
    }

    for (int line = 0; line < 3 + n + n / 2; line++) {
        top_and_front_face(n, line);
        if (line > 0 && line < 2 + n + n / 2) {
            side_face(n, line);
        }
        mx_printchar('\n');
    }
}





