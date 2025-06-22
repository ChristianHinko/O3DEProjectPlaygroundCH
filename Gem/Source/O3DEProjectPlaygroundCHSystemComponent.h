
#pragma once

#include <AzCore/Component/Component.h>

#include <O3DEProjectPlaygroundCH/O3DEProjectPlaygroundCHBus.h>

namespace O3DEProjectPlaygroundCH
{
    class O3DEProjectPlaygroundCHSystemComponent
        : public AZ::Component
        , protected O3DEProjectPlaygroundCHRequestBus::Handler
    {
    public:
        AZ_COMPONENT_DECL(O3DEProjectPlaygroundCHSystemComponent);

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        O3DEProjectPlaygroundCHSystemComponent();
        ~O3DEProjectPlaygroundCHSystemComponent();

    protected:
        ////////////////////////////////////////////////////////////////////////
        // O3DEProjectPlaygroundCHRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
