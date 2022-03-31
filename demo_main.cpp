#include <iostream>
#include <string>
#include "Global.h"


// Data
static ID3D11Device* g_pd3dDevice = NULL;
static ID3D11DeviceContext* g_pd3dDeviceContext = NULL;
static IDXGISwapChain* g_pSwapChain = NULL;
static ID3D11RenderTargetView* g_mainRenderTargetView = NULL;


void MySaveFunction(float *ff)
{
	std::cout << "Saving..." << *ff << std::endl;
}

int mainim() {

	return 0;
}