
#include <AzCore/Serialization/SerializeContext.h>

#include "O3DEProjectPlaygroundCHSystemComponent.h"

#include <O3DEProjectPlaygroundCH/O3DEProjectPlaygroundCHTypeIds.h>

namespace O3DEProjectPlaygroundCH
{
    AZ_COMPONENT_IMPL(O3DEProjectPlaygroundCHSystemComponent, "O3DEProjectPlaygroundCHSystemComponent",
        O3DEProjectPlaygroundCHSystemComponentTypeId);

    void O3DEProjectPlaygroundCHSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (auto serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serializeContext->Class<O3DEProjectPlaygroundCHSystemComponent, AZ::Component>()
                ->Version(0)
                ;
        }
    }

    void O3DEProjectPlaygroundCHSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC_CE("O3DEProjectPlaygroundCHService"));
    }

    void O3DEProjectPlaygroundCHSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC_CE("O3DEProjectPlaygroundCHService"));
    }

    void O3DEProjectPlaygroundCHSystemComponent::GetRequiredServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& required)
    {
    }

    void O3DEProjectPlaygroundCHSystemComponent::GetDependentServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
    }

    O3DEProjectPlaygroundCHSystemComponent::O3DEProjectPlaygroundCHSystemComponent()
    {
        if (O3DEProjectPlaygroundCHInterface::Get() == nullptr)
        {
            O3DEProjectPlaygroundCHInterface::Register(this);
        }
    }

    O3DEProjectPlaygroundCHSystemComponent::~O3DEProjectPlaygroundCHSystemComponent()
    {
        if (O3DEProjectPlaygroundCHInterface::Get() == this)
        {
            O3DEProjectPlaygroundCHInterface::Unregister(this);
        }
    }

    void O3DEProjectPlaygroundCHSystemComponent::Init()
    {
    }

    void O3DEProjectPlaygroundCHSystemComponent::Activate()
    {
        O3DEProjectPlaygroundCHRequestBus::Handler::BusConnect();
    }

    void O3DEProjectPlaygroundCHSystemComponent::Deactivate()
    {
        O3DEProjectPlaygroundCHRequestBus::Handler::BusDisconnect();
    }
}
