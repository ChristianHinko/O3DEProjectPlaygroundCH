
#pragma once

#include <O3DETestGame/O3DETestGameTypeIds.h>

#include <AzCore/EBus/EBus.h>
#include <AzCore/Interface/Interface.h>

namespace O3DETestGame
{
    class O3DETestGameRequests
    {
    public:
        AZ_RTTI(O3DETestGameRequests, O3DETestGameRequestsTypeId);
        virtual ~O3DETestGameRequests() = default;
        // Put your public methods here
    };

    class O3DETestGameBusTraits
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static constexpr AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static constexpr AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////
    };

    using O3DETestGameRequestBus = AZ::EBus<O3DETestGameRequests, O3DETestGameBusTraits>;
    using O3DETestGameInterface = AZ::Interface<O3DETestGameRequests>;

} // namespace O3DETestGame
