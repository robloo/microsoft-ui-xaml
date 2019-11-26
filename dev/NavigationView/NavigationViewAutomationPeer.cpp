﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "pch.h"
#include "common.h"
#include "ResourceAccessor.h"
#include "NavigationViewAutomationPeer.h"
#include "NavigationView.h"
#include "NavigationViewItemBase.h"
#include "SharedHelpers.h"


CppWinRTActivatableClassWithBasicFactory(NavigationViewAutomationPeer);

NavigationViewAutomationPeer::NavigationViewAutomationPeer(winrt::NavigationView const& owner) :
    ReferenceTracker(owner)
{
}

winrt::IInspectable NavigationViewAutomationPeer::GetPatternCore(winrt::PatternInterface const& patternInterface)
{
    if (patternInterface == winrt::PatternInterface::Selection)
    {
        return *this;
    }

    return __super::GetPatternCore(patternInterface);
}

bool NavigationViewAutomationPeer::CanSelectMultiple()
{
    return false;
}

bool NavigationViewAutomationPeer::IsSelectionRequried()
{
    return false;
}

winrt::com_array<winrt::Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> NavigationViewAutomationPeer::GetSelection()
{
    return {};
}