
extern "C" void __declspec(dllimport) __stdcall ExitProcess(int code);

void EntryPoint() {
	ExitProcess(0);
}
