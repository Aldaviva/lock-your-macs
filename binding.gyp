{
    "variables": {
        "module_name": "maclock",
    },
    "targets": [
        {
            "target_name": "<(module_name)",
            "sources": [
                "src/main/c++/maclock.cpp",
                "src/main/c++/bindings.cpp"
            ],
            "xcode_settings": {
                "OTHER_CPLUSPLUSFLAGS": ["-std=c++11", "-stdlib=libc++", "-mmacosx-version-min=10.7"],
                "OTHER_LDFLAGS": ["-framework CoreFoundation -framework CoreGraphics"]
            },
            "defines": [
                "UNICODE"
            ],
            "include_dirs": [
                "<!(node -e \"require('nan')\")"
            ]
        },
        {
            "target_name": "move-to-target",
            "type": "none",
            "dependencies": [
                "<(module_name)"
            ],
            "copies": [
                {
                    "files": [ "<(PRODUCT_DIR)/<(module_name).node" ],
                    "destination": "target"
                }
            ]
        }
    ]
}