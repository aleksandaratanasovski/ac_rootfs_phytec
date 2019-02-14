QT.waylandclient.VERSION = 5.7.1
QT.waylandclient.MAJOR_VERSION = 5
QT.waylandclient.MINOR_VERSION = 7
QT.waylandclient.PATCH_VERSION = 1
QT.waylandclient.name = QtWaylandClient
QT.waylandclient.module = Qt5WaylandClient
QT.waylandclient.libs = $$QT_MODULE_LIB_BASE
QT.waylandclient.includes = $$QT_MODULE_INCLUDE_BASE $$QT_MODULE_INCLUDE_BASE/QtWaylandClient
QT.waylandclient.frameworks =
QT.waylandclient.bins = $$QT_MODULE_BIN_BASE
QT.waylandclient.libexecs = $$QT_MODULE_LIBEXEC_BASE
QT.waylandclient.plugins = $$QT_MODULE_PLUGIN_BASE
QT.waylandclient.imports = $$QT_MODULE_IMPORT_BASE
QT.waylandclient.qml = $$QT_MODULE_QML_BASE
QT.waylandclient.plugin_types = wayland-graphics-integration-client wayland-inputdevice-integration wayland-decoration-client wayland-shell-integration
QT.waylandclient.depends = core gui
QT.waylandclient.run_depends = platformsupport_private
QT.waylandclient.module_config = v2
QT.waylandclient.DEFINES = QT_WAYLANDCLIENT_LIB
QT_MODULES += waylandclient
