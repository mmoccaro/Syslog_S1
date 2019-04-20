/* =======================
 *
 * Author: Matthew Moccaro
 * File:   Syslog_S1.cpp
 * Type:   C++ Soure File
 * 
 * Creation Date: 4/20/19
 *
 * Description: Main source 
 * file for project.
 * 
 * ====================== */

//Directives
#include<iostream>
#include<gtk/gtk.h>

//Destroy Function
void destroy( GtkWidget *widget,gpointer   data )
{
   gtk_main_quit ();
}

//Main
int main(int argc, char **argv)
{
	//Initial GTK Setup
	GtkWidget *window;
	gtk_init (&argc, &argv);

	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);

	g_signal_connect (window, "destroy",
	G_CALLBACK (destroy), NULL);

	gtk_widget_show_all(window); 

	gtk_main ();

	//Exit Status
	return 0;
}
