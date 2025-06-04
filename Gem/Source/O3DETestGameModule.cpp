
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include "O3DETestGameSystemComponent.h"

#include <O3DETestGame/O3DETestGameTypeIds.h>

namespace O3DETestGame
{
    class O3DETestGameModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(O3DETestGameModule, O3DETestGameModuleTypeId, AZ::Module);
        AZ_CLASS_ALLOCATOR(O3DETestGameModule, AZ::SystemAllocator);

        O3DETestGameModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                O3DETestGameSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<O3DETestGameSystemComponent>(),
            };
        }
    };
}// namespace O3DETestGame

#if defined(O3DE_GEM_NAME)
AZ_DECLARE_MODULE_CLASS(AZ_JOIN(Gem_, O3DE_GEM_NAME), O3DETestGame::O3DETestGameModule)
#else
AZ_DECLARE_MODULE_CLASS(Gem_O3DETestGame, O3DETestGame::O3DETestGameModule)
#endif
