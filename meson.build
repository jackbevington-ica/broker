project('statusengine-broker', 'cpp',
    version: '4.2.0',
    default_options: ['warning_level=3', 'cpp_std=c++11'],
    license: 'GPLv2+')

uchardet_dep = dependency('uchardet')
gearmand_dep = dependency('gearmand', required: get_option('gearman'))
librabbitmq_dep = dependency('librabbitmq', required: get_option('rabbitmq'))
jsonc_dep = dependency('json-c')

if get_option('nagios')
    nagios_dep = declare_dependency(include_directories: include_directories(get_option('nagios_include_dir'))).as_system('system')
else
    glib_dep = dependency('glib-2.0')
    naemon_full_dep = dependency('naemon')
    # We don't want to link against libnaemon
    naemon_dep = declare_dependency(include_directories: include_directories(naemon_full_dep.get_pkgconfig_variable('includedir'))).as_system('system')
endif
toml_dep = declare_dependency(include_directories: include_directories('vendor')).as_system('system')

subdir('src')
