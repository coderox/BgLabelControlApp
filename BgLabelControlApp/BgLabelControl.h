#pragma once

#include "BgLabelControl.g.h"

namespace winrt::BgLabelControlApp::implementation
{
    struct BgLabelControl : BgLabelControlT<BgLabelControl>
    {
        BgLabelControl() = default;

        hstring Label();
        void Label(hstring const& value);

        static Windows::UI::Xaml::DependencyProperty LabelProperty();
    };
}

namespace winrt::BgLabelControlApp::factory_implementation
{
    struct BgLabelControl : BgLabelControlT<BgLabelControl, implementation::BgLabelControl>
    {
    };
}
