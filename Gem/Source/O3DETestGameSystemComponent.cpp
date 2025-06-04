
#include <AzCore/Serialization/SerializeContext.h>

#include "O3DETestGameSystemComponent.h"

#include <O3DETestGame/O3DETestGameTypeIds.h>

namespace O3DETestGame
{
    AZ_COMPONENT_IMPL(O3DETestGameSystemComponent, "O3DETestGameSystemComponent",
        O3DETestGameSystemComponentTypeId);

    void O3DETestGameSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (auto serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serializeContext->Class<O3DETestGameSystemComponent, AZ::Component>()
                ->Version(0)
                ;
        }
    }

    void O3DETestGameSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC_CE("O3DETestGameService"));
    }

    void O3DETestGameSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC_CE("O3DETestGameService"));
    }

    void O3DETestGameSystemComponent::GetRequiredServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& required)
    {
    }

    void O3DETestGameSystemComponent::GetDependentServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
    }

    O3DETestGameSystemComponent::O3DETestGameSystemComponent()
    {
        if (O3DETestGameInterface::Get() == nullptr)
        {
            O3DETestGameInterface::Register(this);
        }
    }

    O3DETestGameSystemComponent::~O3DETestGameSystemComponent()
    {
        if (O3DETestGameInterface::Get() == this)
        {
            O3DETestGameInterface::Unregister(this);
        }
    }

    void O3DETestGameSystemComponent::Init()
    {
    }

    void O3DETestGameSystemComponent::Activate()
    {
        O3DETestGameRequestBus::Handler::BusConnect();
    }

    void O3DETestGameSystemComponent::Deactivate()
    {
        O3DETestGameRequestBus::Handler::BusDisconnect();
    }
}
