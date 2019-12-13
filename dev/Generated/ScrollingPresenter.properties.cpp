// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ScrollingPresenter.h"

namespace winrt::Microsoft::UI::Xaml::Controls::Primitives
{
    CppWinRTActivatableClassWithDPFactory(ScrollingPresenter)
}

#include "ScrollingPresenter.g.cpp"

GlobalDependencyProperty ScrollingPresenterProperties::s_BackgroundProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_ContentProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_ContentOrientationProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_HorizontalAnchorRatioProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_HorizontalScrollChainModeProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_HorizontalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_HorizontalScrollRailModeProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_IgnoredInputKindProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_MaxZoomFactorProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_MinZoomFactorProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_VerticalAnchorRatioProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_VerticalScrollChainModeProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_VerticalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_VerticalScrollRailModeProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_ZoomChainModeProperty{ nullptr };
GlobalDependencyProperty ScrollingPresenterProperties::s_ZoomModeProperty{ nullptr };

ScrollingPresenterProperties::ScrollingPresenterProperties()
    : m_anchorRequestedEventSource{static_cast<ScrollingPresenter*>(this)}
    , m_bringingIntoViewEventSource{static_cast<ScrollingPresenter*>(this)}
    , m_extentChangedEventSource{static_cast<ScrollingPresenter*>(this)}
    , m_scrollAnimationStartingEventSource{static_cast<ScrollingPresenter*>(this)}
    , m_scrollCompletedEventSource{static_cast<ScrollingPresenter*>(this)}
    , m_stateChangedEventSource{static_cast<ScrollingPresenter*>(this)}
    , m_viewChangedEventSource{static_cast<ScrollingPresenter*>(this)}
    , m_zoomAnimationStartingEventSource{static_cast<ScrollingPresenter*>(this)}
    , m_zoomCompletedEventSource{static_cast<ScrollingPresenter*>(this)}
{
    EnsureProperties();
}

void ScrollingPresenterProperties::EnsureProperties()
{
    if (!s_BackgroundProperty)
    {
        s_BackgroundProperty =
            InitializeDependencyProperty(
                L"Background",
                winrt::name_of<winrt::Brush>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::Brush>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnBackgroundPropertyChanged));
    }
    if (!s_ContentProperty)
    {
        s_ContentProperty =
            InitializeDependencyProperty(
                L"Content",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnContentPropertyChanged));
    }
    if (!s_ContentOrientationProperty)
    {
        s_ContentOrientationProperty =
            InitializeDependencyProperty(
                L"ContentOrientation",
                winrt::name_of<winrt::ScrollingContentOrientation>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingContentOrientation>::BoxValueIfNecessary(ScrollingPresenter::s_defaultContentOrientation),
                winrt::PropertyChangedCallback(&OnContentOrientationPropertyChanged));
    }
    if (!s_HorizontalAnchorRatioProperty)
    {
        s_HorizontalAnchorRatioProperty =
            InitializeDependencyProperty(
                L"HorizontalAnchorRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollingPresenter::s_defaultAnchorRatio),
                winrt::PropertyChangedCallback(&OnHorizontalAnchorRatioPropertyChanged));
    }
    if (!s_HorizontalScrollChainModeProperty)
    {
        s_HorizontalScrollChainModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollChainMode",
                winrt::name_of<winrt::ScrollingChainMode>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(ScrollingPresenter::s_defaultHorizontalScrollChainMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollChainModePropertyChanged));
    }
    if (!s_HorizontalScrollModeProperty)
    {
        s_HorizontalScrollModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollMode",
                winrt::name_of<winrt::ScrollingScrollMode>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(ScrollingPresenter::s_defaultHorizontalScrollMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollModePropertyChanged));
    }
    if (!s_HorizontalScrollRailModeProperty)
    {
        s_HorizontalScrollRailModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollRailMode",
                winrt::name_of<winrt::ScrollingRailMode>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingRailMode>::BoxValueIfNecessary(ScrollingPresenter::s_defaultHorizontalScrollRailMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollRailModePropertyChanged));
    }
    if (!s_IgnoredInputKindProperty)
    {
        s_IgnoredInputKindProperty =
            InitializeDependencyProperty(
                L"IgnoredInputKind",
                winrt::name_of<winrt::ScrollingInputKinds>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingInputKinds>::BoxValueIfNecessary(ScrollingPresenter::s_defaultIgnoredInputKind),
                winrt::PropertyChangedCallback(&OnIgnoredInputKindPropertyChanged));
    }
    if (!s_MaxZoomFactorProperty)
    {
        s_MaxZoomFactorProperty =
            InitializeDependencyProperty(
                L"MaxZoomFactor",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollingPresenter::s_defaultMaxZoomFactor),
                winrt::PropertyChangedCallback(&OnMaxZoomFactorPropertyChanged));
    }
    if (!s_MinZoomFactorProperty)
    {
        s_MinZoomFactorProperty =
            InitializeDependencyProperty(
                L"MinZoomFactor",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollingPresenter::s_defaultMinZoomFactor),
                winrt::PropertyChangedCallback(&OnMinZoomFactorPropertyChanged));
    }
    if (!s_VerticalAnchorRatioProperty)
    {
        s_VerticalAnchorRatioProperty =
            InitializeDependencyProperty(
                L"VerticalAnchorRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollingPresenter::s_defaultAnchorRatio),
                winrt::PropertyChangedCallback(&OnVerticalAnchorRatioPropertyChanged));
    }
    if (!s_VerticalScrollChainModeProperty)
    {
        s_VerticalScrollChainModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollChainMode",
                winrt::name_of<winrt::ScrollingChainMode>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(ScrollingPresenter::s_defaultVerticalScrollChainMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollChainModePropertyChanged));
    }
    if (!s_VerticalScrollModeProperty)
    {
        s_VerticalScrollModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollMode",
                winrt::name_of<winrt::ScrollingScrollMode>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(ScrollingPresenter::s_defaultVerticalScrollMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollModePropertyChanged));
    }
    if (!s_VerticalScrollRailModeProperty)
    {
        s_VerticalScrollRailModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollRailMode",
                winrt::name_of<winrt::ScrollingRailMode>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingRailMode>::BoxValueIfNecessary(ScrollingPresenter::s_defaultVerticalScrollRailMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollRailModePropertyChanged));
    }
    if (!s_ZoomChainModeProperty)
    {
        s_ZoomChainModeProperty =
            InitializeDependencyProperty(
                L"ZoomChainMode",
                winrt::name_of<winrt::ScrollingChainMode>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(ScrollingPresenter::s_defaultZoomChainMode),
                winrt::PropertyChangedCallback(&OnZoomChainModePropertyChanged));
    }
    if (!s_ZoomModeProperty)
    {
        s_ZoomModeProperty =
            InitializeDependencyProperty(
                L"ZoomMode",
                winrt::name_of<winrt::ScrollingZoomMode>(),
                winrt::name_of<winrt::ScrollingPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingZoomMode>::BoxValueIfNecessary(ScrollingPresenter::s_defaultZoomMode),
                winrt::PropertyChangedCallback(&OnZoomModePropertyChanged));
    }
}

void ScrollingPresenterProperties::ClearProperties()
{
    s_BackgroundProperty = nullptr;
    s_ContentProperty = nullptr;
    s_ContentOrientationProperty = nullptr;
    s_HorizontalAnchorRatioProperty = nullptr;
    s_HorizontalScrollChainModeProperty = nullptr;
    s_HorizontalScrollModeProperty = nullptr;
    s_HorizontalScrollRailModeProperty = nullptr;
    s_IgnoredInputKindProperty = nullptr;
    s_MaxZoomFactorProperty = nullptr;
    s_MinZoomFactorProperty = nullptr;
    s_VerticalAnchorRatioProperty = nullptr;
    s_VerticalScrollChainModeProperty = nullptr;
    s_VerticalScrollModeProperty = nullptr;
    s_VerticalScrollRailModeProperty = nullptr;
    s_ZoomChainModeProperty = nullptr;
    s_ZoomModeProperty = nullptr;
}

void ScrollingPresenterProperties::OnBackgroundPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();
    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnContentPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();
    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnContentOrientationPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();
    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnHorizontalAnchorRatioPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollingPresenter>(owner)->ValidateAnchorRatio(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnHorizontalScrollChainModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();
    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnHorizontalScrollModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();
    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnHorizontalScrollRailModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();
    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnIgnoredInputKindPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();
    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnMaxZoomFactorPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollingPresenter>(owner)->ValidateZoomFactoryBoundary(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnMinZoomFactorPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollingPresenter>(owner)->ValidateZoomFactoryBoundary(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnVerticalAnchorRatioPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollingPresenter>(owner)->ValidateAnchorRatio(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnVerticalScrollChainModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();
    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnVerticalScrollModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();
    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnVerticalScrollRailModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();
    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnZoomChainModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();
    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::OnZoomModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollingPresenter>();
    winrt::get_self<ScrollingPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollingPresenterProperties::Background(winrt::Brush const& value)
{
    static_cast<ScrollingPresenter*>(this)->SetValue(s_BackgroundProperty, ValueHelper<winrt::Brush>::BoxValueIfNecessary(value));
}

winrt::Brush ScrollingPresenterProperties::Background()
{
    return ValueHelper<winrt::Brush>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_BackgroundProperty));
}

void ScrollingPresenterProperties::Content(winrt::UIElement const& value)
{
    static_cast<ScrollingPresenter*>(this)->SetValue(s_ContentProperty, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
}

winrt::UIElement ScrollingPresenterProperties::Content()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_ContentProperty));
}

void ScrollingPresenterProperties::ContentOrientation(winrt::ScrollingContentOrientation const& value)
{
    static_cast<ScrollingPresenter*>(this)->SetValue(s_ContentOrientationProperty, ValueHelper<winrt::ScrollingContentOrientation>::BoxValueIfNecessary(value));
}

winrt::ScrollingContentOrientation ScrollingPresenterProperties::ContentOrientation()
{
    return ValueHelper<winrt::ScrollingContentOrientation>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_ContentOrientationProperty));
}

void ScrollingPresenterProperties::HorizontalAnchorRatio(double value)
{
    double coercedValue = value;
    static_cast<ScrollingPresenter*>(this)->ValidateAnchorRatio(coercedValue);
    static_cast<ScrollingPresenter*>(this)->SetValue(s_HorizontalAnchorRatioProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
}

double ScrollingPresenterProperties::HorizontalAnchorRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_HorizontalAnchorRatioProperty));
}

void ScrollingPresenterProperties::HorizontalScrollChainMode(winrt::ScrollingChainMode const& value)
{
    static_cast<ScrollingPresenter*>(this)->SetValue(s_HorizontalScrollChainModeProperty, ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingChainMode ScrollingPresenterProperties::HorizontalScrollChainMode()
{
    return ValueHelper<winrt::ScrollingChainMode>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_HorizontalScrollChainModeProperty));
}

void ScrollingPresenterProperties::HorizontalScrollMode(winrt::ScrollingScrollMode const& value)
{
    static_cast<ScrollingPresenter*>(this)->SetValue(s_HorizontalScrollModeProperty, ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingScrollMode ScrollingPresenterProperties::HorizontalScrollMode()
{
    return ValueHelper<winrt::ScrollingScrollMode>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_HorizontalScrollModeProperty));
}

void ScrollingPresenterProperties::HorizontalScrollRailMode(winrt::ScrollingRailMode const& value)
{
    static_cast<ScrollingPresenter*>(this)->SetValue(s_HorizontalScrollRailModeProperty, ValueHelper<winrt::ScrollingRailMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingRailMode ScrollingPresenterProperties::HorizontalScrollRailMode()
{
    return ValueHelper<winrt::ScrollingRailMode>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_HorizontalScrollRailModeProperty));
}

void ScrollingPresenterProperties::IgnoredInputKind(winrt::ScrollingInputKinds const& value)
{
    static_cast<ScrollingPresenter*>(this)->SetValue(s_IgnoredInputKindProperty, ValueHelper<winrt::ScrollingInputKinds>::BoxValueIfNecessary(value));
}

winrt::ScrollingInputKinds ScrollingPresenterProperties::IgnoredInputKind()
{
    return ValueHelper<winrt::ScrollingInputKinds>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_IgnoredInputKindProperty));
}

void ScrollingPresenterProperties::MaxZoomFactor(double value)
{
    double coercedValue = value;
    static_cast<ScrollingPresenter*>(this)->ValidateZoomFactoryBoundary(coercedValue);
    static_cast<ScrollingPresenter*>(this)->SetValue(s_MaxZoomFactorProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
}

double ScrollingPresenterProperties::MaxZoomFactor()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_MaxZoomFactorProperty));
}

void ScrollingPresenterProperties::MinZoomFactor(double value)
{
    double coercedValue = value;
    static_cast<ScrollingPresenter*>(this)->ValidateZoomFactoryBoundary(coercedValue);
    static_cast<ScrollingPresenter*>(this)->SetValue(s_MinZoomFactorProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
}

double ScrollingPresenterProperties::MinZoomFactor()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_MinZoomFactorProperty));
}

void ScrollingPresenterProperties::VerticalAnchorRatio(double value)
{
    double coercedValue = value;
    static_cast<ScrollingPresenter*>(this)->ValidateAnchorRatio(coercedValue);
    static_cast<ScrollingPresenter*>(this)->SetValue(s_VerticalAnchorRatioProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
}

double ScrollingPresenterProperties::VerticalAnchorRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_VerticalAnchorRatioProperty));
}

void ScrollingPresenterProperties::VerticalScrollChainMode(winrt::ScrollingChainMode const& value)
{
    static_cast<ScrollingPresenter*>(this)->SetValue(s_VerticalScrollChainModeProperty, ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingChainMode ScrollingPresenterProperties::VerticalScrollChainMode()
{
    return ValueHelper<winrt::ScrollingChainMode>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_VerticalScrollChainModeProperty));
}

void ScrollingPresenterProperties::VerticalScrollMode(winrt::ScrollingScrollMode const& value)
{
    static_cast<ScrollingPresenter*>(this)->SetValue(s_VerticalScrollModeProperty, ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingScrollMode ScrollingPresenterProperties::VerticalScrollMode()
{
    return ValueHelper<winrt::ScrollingScrollMode>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_VerticalScrollModeProperty));
}

void ScrollingPresenterProperties::VerticalScrollRailMode(winrt::ScrollingRailMode const& value)
{
    static_cast<ScrollingPresenter*>(this)->SetValue(s_VerticalScrollRailModeProperty, ValueHelper<winrt::ScrollingRailMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingRailMode ScrollingPresenterProperties::VerticalScrollRailMode()
{
    return ValueHelper<winrt::ScrollingRailMode>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_VerticalScrollRailModeProperty));
}

void ScrollingPresenterProperties::ZoomChainMode(winrt::ScrollingChainMode const& value)
{
    static_cast<ScrollingPresenter*>(this)->SetValue(s_ZoomChainModeProperty, ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingChainMode ScrollingPresenterProperties::ZoomChainMode()
{
    return ValueHelper<winrt::ScrollingChainMode>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_ZoomChainModeProperty));
}

void ScrollingPresenterProperties::ZoomMode(winrt::ScrollingZoomMode const& value)
{
    static_cast<ScrollingPresenter*>(this)->SetValue(s_ZoomModeProperty, ValueHelper<winrt::ScrollingZoomMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingZoomMode ScrollingPresenterProperties::ZoomMode()
{
    return ValueHelper<winrt::ScrollingZoomMode>::CastOrUnbox(static_cast<ScrollingPresenter*>(this)->GetValue(s_ZoomModeProperty));
}

winrt::event_token ScrollingPresenterProperties::AnchorRequested(winrt::TypedEventHandler<winrt::ScrollingPresenter, winrt::ScrollingAnchorRequestedEventArgs> const& value)
{
    return m_anchorRequestedEventSource.add(value);
}

void ScrollingPresenterProperties::AnchorRequested(winrt::event_token const& token)
{
    m_anchorRequestedEventSource.remove(token);
}

winrt::event_token ScrollingPresenterProperties::BringingIntoView(winrt::TypedEventHandler<winrt::ScrollingPresenter, winrt::ScrollingBringingIntoViewEventArgs> const& value)
{
    return m_bringingIntoViewEventSource.add(value);
}

void ScrollingPresenterProperties::BringingIntoView(winrt::event_token const& token)
{
    m_bringingIntoViewEventSource.remove(token);
}

winrt::event_token ScrollingPresenterProperties::ExtentChanged(winrt::TypedEventHandler<winrt::ScrollingPresenter, winrt::IInspectable> const& value)
{
    return m_extentChangedEventSource.add(value);
}

void ScrollingPresenterProperties::ExtentChanged(winrt::event_token const& token)
{
    m_extentChangedEventSource.remove(token);
}

winrt::event_token ScrollingPresenterProperties::ScrollAnimationStarting(winrt::TypedEventHandler<winrt::ScrollingPresenter, winrt::ScrollingScrollAnimationStartingEventArgs> const& value)
{
    return m_scrollAnimationStartingEventSource.add(value);
}

void ScrollingPresenterProperties::ScrollAnimationStarting(winrt::event_token const& token)
{
    m_scrollAnimationStartingEventSource.remove(token);
}

winrt::event_token ScrollingPresenterProperties::ScrollCompleted(winrt::TypedEventHandler<winrt::ScrollingPresenter, winrt::ScrollingScrollCompletedEventArgs> const& value)
{
    return m_scrollCompletedEventSource.add(value);
}

void ScrollingPresenterProperties::ScrollCompleted(winrt::event_token const& token)
{
    m_scrollCompletedEventSource.remove(token);
}

winrt::event_token ScrollingPresenterProperties::StateChanged(winrt::TypedEventHandler<winrt::ScrollingPresenter, winrt::IInspectable> const& value)
{
    return m_stateChangedEventSource.add(value);
}

void ScrollingPresenterProperties::StateChanged(winrt::event_token const& token)
{
    m_stateChangedEventSource.remove(token);
}

winrt::event_token ScrollingPresenterProperties::ViewChanged(winrt::TypedEventHandler<winrt::ScrollingPresenter, winrt::IInspectable> const& value)
{
    return m_viewChangedEventSource.add(value);
}

void ScrollingPresenterProperties::ViewChanged(winrt::event_token const& token)
{
    m_viewChangedEventSource.remove(token);
}

winrt::event_token ScrollingPresenterProperties::ZoomAnimationStarting(winrt::TypedEventHandler<winrt::ScrollingPresenter, winrt::ScrollingZoomAnimationStartingEventArgs> const& value)
{
    return m_zoomAnimationStartingEventSource.add(value);
}

void ScrollingPresenterProperties::ZoomAnimationStarting(winrt::event_token const& token)
{
    m_zoomAnimationStartingEventSource.remove(token);
}

winrt::event_token ScrollingPresenterProperties::ZoomCompleted(winrt::TypedEventHandler<winrt::ScrollingPresenter, winrt::ScrollingZoomCompletedEventArgs> const& value)
{
    return m_zoomCompletedEventSource.add(value);
}

void ScrollingPresenterProperties::ZoomCompleted(winrt::event_token const& token)
{
    m_zoomCompletedEventSource.remove(token);
}
