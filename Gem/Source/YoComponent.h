
#pragma once

#include <AzCore/Component/Component.h>

#include <O3DETestGame/O3DETestGameBus.h>

namespace O3DETestGame
{
    class YoComponent
        : public AZ::Component
    {
    public:
        AZ_COMPONENT_DECL(YoComponent);

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        YoComponent();
        ~YoComponent();

    protected:

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
