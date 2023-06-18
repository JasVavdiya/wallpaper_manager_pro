#ifndef FLUTTER_PLUGIN_WALLPAPER_MANAGER_PRO_PLUGIN_H_
#define FLUTTER_PLUGIN_WALLPAPER_MANAGER_PRO_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace wallpaper_manager_pro {

class WallpaperManagerProPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  WallpaperManagerProPlugin();

  virtual ~WallpaperManagerProPlugin();

  // Disallow copy and assign.
  WallpaperManagerProPlugin(const WallpaperManagerProPlugin&) = delete;
  WallpaperManagerProPlugin& operator=(const WallpaperManagerProPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace wallpaper_manager_pro

#endif  // FLUTTER_PLUGIN_WALLPAPER_MANAGER_PRO_PLUGIN_H_
