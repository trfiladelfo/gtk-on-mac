//
//  main.c
//  Teste
//
//  Created by Thiago Filadelfo on 07/01/15.
//  Copyright (c) 2015 Thiago Filadelfo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>

int main(int argc, const char *argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    
    GtkWidget *window;
    
    gtk_init(&argc, &argv);
    
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_widget_show(window);
    
    gtk_main();
    
    
    return 0;
}
