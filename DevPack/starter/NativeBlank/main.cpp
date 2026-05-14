#include <Mod/CppUserModBase.hpp>
#include <UE4SSProgram.hpp>

class NativeBlank : public RC::CppUserModBase {
public:
    NativeBlank()
        : CppUserModBase()
    {
        ModName = STR("NativeBlank");
        ModVersion = STR("0.1.0");
        ModDescription = STR("Native starter mod for SN2");
    }

    auto on_program_start() -> void override {}

    auto on_unreal_init() -> void override
    {
        Output::send<LogLevel::Verbose>(STR("[NativeBlank] loaded\n"));
    }

    ~NativeBlank() override = default;
};

extern "C" {
    __declspec(dllexport) RC::CppUserModBase* start_mod()
    {
        return new NativeBlank();
    }

    __declspec(dllexport) void uninstall_mod(RC::CppUserModBase* mod)
    {
        delete mod;
    }
}