
#pragma once

#include <AzCore/Component/Component.h>

#include <O3DETestGame/O3DETestGameBus.h>

namespace O3DETestGame
{
    class O3DETestGameSystemComponent
        : public AZ::Component
        , protected O3DETestGameRequestBus::Handler
    {
    public:
        AZ_COMPONENT_DECL(O3DETestGameSystemComponent);

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        O3DETestGameSystemComponent();
        ~O3DETestGameSystemComponent();

    protected:
        ////////////////////////////////////////////////////////////////////////
        // O3DETestGameRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
