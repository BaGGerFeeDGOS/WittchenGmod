#include "main_window.h"

#include <imgui/im_tools.h>
#include "../widgets/widgets.h"

using namespace ImGui;

void main_window::draw_main_window() {
	Begin(u8"���� ���� ���� ����� ���� (��� ���� ����� �����)##MAINWINDOW", 0 , ImGuiWindowFlags_AlwaysAutoResize);
	
	WittchenCheckbox("Bunny Hop", "bhop");

	Wittchen::DrawEspEditor();
	
	End();
}
