
#include <AzCore/Serialization/SerializeContext.h>

#include "YoComponent.h"

#include <O3DETestGame/O3DETestGameTypeIds.h>

namespace O3DETestGame
{
    AZ_COMPONENT_IMPL(YoComponent, "YoComponent",
        YoComponentTypeId);

    void YoComponent::Reflect(AZ::ReflectContext* context)
    {
        if (auto serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serializeContext->Class<YoComponent, AZ::Component>()
                ->Version(0)
                ;
        }
    }

    void YoComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC_CE("O3DETestGameYoService"));
    }

    void YoComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC_CE("O3DETestGameYoService"));
    }

    void YoComponent::GetRequiredServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& required)
    {
    }

    void YoComponent::GetDependentServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
    }

    YoComponent::YoComponent()
    {
    }

    YoComponent::~YoComponent()
    {
    }

    void YoComponent::Init()
    {
    }

    void YoComponent::Activate()
    {
    }

    void YoComponent::Deactivate()
    {
    }
}
