
#pragma once

#include <O3DEProjectPlaygroundCH/O3DEProjectPlaygroundCHTypeIds.h>

#include <AzCore/EBus/EBus.h>
#include <AzCore/Interface/Interface.h>

namespace O3DEProjectPlaygroundCH
{
    class O3DEProjectPlaygroundCHRequests
    {
    public:
        AZ_RTTI(O3DEProjectPlaygroundCHRequests, O3DEProjectPlaygroundCHRequestsTypeId);
        virtual ~O3DEProjectPlaygroundCHRequests() = default;
        // Put your public methods here
    };

    class O3DEProjectPlaygroundCHBusTraits
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static constexpr AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static constexpr AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////
    };

    using O3DEProjectPlaygroundCHRequestBus = AZ::EBus<O3DEProjectPlaygroundCHRequests, O3DEProjectPlaygroundCHBusTraits>;
    using O3DEProjectPlaygroundCHInterface = AZ::Interface<O3DEProjectPlaygroundCHRequests>;

} // namespace O3DEProjectPlaygroundCH
