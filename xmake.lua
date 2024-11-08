add_repositories("package_repo https://github.com/Miou-zora/HelloWorldXmakePackage-Package.git")

add_requires("my_package")

target("test")
    set_kind("binary")
    add_files("src/*.cpp")
    add_packages("my_package")
