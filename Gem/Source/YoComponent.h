
#pragma once

#include <AzCore/Component/Component.h>

#include <O3DEProjectPlaygroundCH/O3DEProjectPlaygroundCHBus.h>

namespace O3DEProjectPlaygroundCH
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
