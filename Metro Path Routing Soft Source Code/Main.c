// Metro Path Routing Soft.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Main.h"

using namespace System;
using namespace System::Windows::Forms;

edge_t *edge_root = 0;
edge_t *e_next = 0;

heap_t *heap;
int heap_len;

node_t *nodes = NULL;


Void Main(array<String^>^args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MetroPathRoutingSoft::Interface form;
	Application::Run(%form);
}
