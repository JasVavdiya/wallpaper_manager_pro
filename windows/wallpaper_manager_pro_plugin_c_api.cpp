#include "include/wallpaper_manager_pro/wallpaper_manager_pro_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "wallpaper_manager_pro_plugin.h"

void WallpaperManagerProPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  wallpaper_manager_pro::WallpaperManagerProPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
