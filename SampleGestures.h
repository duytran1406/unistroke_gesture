#ifndef _SampleGesturesIncluded_
#define _SampleGesturesIncluded_

#include "UnistrokeRecognizerTypes.h"
#include "cocos2d.h"

USING_NS_CC;

// TODO: read from a file. This approach is just ugly
namespace GestureRecognizer
{
    //--- Make it a struct so that everything defaults to public
    struct SampleGestures
    {

        Path2D getGestureLeftSquareBracket()
        {
            Path2D path;
            path.push_back(Vec2(244, 265));
            path.push_back(Vec2(243, 265));
            path.push_back(Vec2(241, 265));
            path.push_back(Vec2(239, 265));
            path.push_back(Vec2(236, 266));
            path.push_back(Vec2(231, 266));
            path.push_back(Vec2(228, 266));
            path.push_back(Vec2(222, 266));
            path.push_back(Vec2(219, 266));
            path.push_back(Vec2(216, 266));
            path.push_back(Vec2(214, 266));
            path.push_back(Vec2(213, 266));
            path.push_back(Vec2(213, 266));
            path.push_back(Vec2(213, 264));
            path.push_back(Vec2(213, 259));
            path.push_back(Vec2(213, 253));
            path.push_back(Vec2(213, 246));
            path.push_back(Vec2(212, 235));
            path.push_back(Vec2(212, 223));
            path.push_back(Vec2(212, 208));
            path.push_back(Vec2(212, 195));
            path.push_back(Vec2(212, 181));
            path.push_back(Vec2(212, 169));
            path.push_back(Vec2(212, 157));
            path.push_back(Vec2(213, 147));
            path.push_back(Vec2(214, 141));
            path.push_back(Vec2(214, 135));
            path.push_back(Vec2(214, 131));
            path.push_back(Vec2(214, 127));
            path.push_back(Vec2(214, 123));
            path.push_back(Vec2(214, 119));
            path.push_back(Vec2(214, 115));
            path.push_back(Vec2(214, 111));
            path.push_back(Vec2(214, 108));
            path.push_back(Vec2(214, 107));
            path.push_back(Vec2(214, 105));
            path.push_back(Vec2(214, 104));
            path.push_back(Vec2(214, 104));
            path.push_back(Vec2(216, 103));
            path.push_back(Vec2(219, 103));
            path.push_back(Vec2(221, 103));
            path.push_back(Vec2(225, 103));
            path.push_back(Vec2(228, 103));
            path.push_back(Vec2(231, 103));
            path.push_back(Vec2(234, 103));
            path.push_back(Vec2(238, 103));
            path.push_back(Vec2(240, 103));
            path.push_back(Vec2(241, 103));
            path.push_back(Vec2(243, 104));

            return path;
        }


        Path2D getGestureRightSquareBracket()
        {
            Path2D path;
            path.push_back(Vec2(227, 260));
            path.push_back(Vec2(228, 260));
            path.push_back(Vec2(229, 260));
            path.push_back(Vec2(230, 260));
            path.push_back(Vec2(231, 260));
            path.push_back(Vec2(233, 260));
            path.push_back(Vec2(235, 260));
            path.push_back(Vec2(238, 260));
            path.push_back(Vec2(241, 260));
            path.push_back(Vec2(243, 260));
            path.push_back(Vec2(244, 260));
            path.push_back(Vec2(244, 260));
            path.push_back(Vec2(245, 260));
            path.push_back(Vec2(246, 260));
            path.push_back(Vec2(247, 260));
            path.push_back(Vec2(249, 260));
            path.push_back(Vec2(252, 260));
            path.push_back(Vec2(254, 260));
            path.push_back(Vec2(256, 260));
            path.push_back(Vec2(257, 260));
            path.push_back(Vec2(257, 260));
            path.push_back(Vec2(258, 260));
            path.push_back(Vec2(259, 260));
            path.push_back(Vec2(258, 259));
            path.push_back(Vec2(259, 259));
            path.push_back(Vec2(260, 259));
            path.push_back(Vec2(261, 259));
            path.push_back(Vec2(261, 259));
            path.push_back(Vec2(262, 259));
            path.push_back(Vec2(262, 257));
            path.push_back(Vec2(262, 255));
            path.push_back(Vec2(262, 250));
            path.push_back(Vec2(262, 246));
            path.push_back(Vec2(262, 242));
            path.push_back(Vec2(262, 238));
            path.push_back(Vec2(262, 234));
            path.push_back(Vec2(262, 229));
            path.push_back(Vec2(262, 225));
            path.push_back(Vec2(262, 220));
            path.push_back(Vec2(262, 215));
            path.push_back(Vec2(262, 210));
            path.push_back(Vec2(262, 204));
            path.push_back(Vec2(262, 200));
            path.push_back(Vec2(262, 195));
            path.push_back(Vec2(262, 191));
            path.push_back(Vec2(262, 188));
            path.push_back(Vec2(262, 185));
            path.push_back(Vec2(262, 181));
            path.push_back(Vec2(262, 177));
            path.push_back(Vec2(262, 172));
            path.push_back(Vec2(262, 167));
            path.push_back(Vec2(262, 161));
            path.push_back(Vec2(262, 156));
            path.push_back(Vec2(262, 147));
            path.push_back(Vec2(262, 137));
            path.push_back(Vec2(262, 128));
            path.push_back(Vec2(263, 124));
            path.push_back(Vec2(264, 120));
            path.push_back(Vec2(264, 118));
            path.push_back(Vec2(264, 116));
            path.push_back(Vec2(264, 114));
            path.push_back(Vec2(264, 112));
            path.push_back(Vec2(264, 110));
            path.push_back(Vec2(265, 108));
            path.push_back(Vec2(265, 105));
            path.push_back(Vec2(265, 102));
            path.push_back(Vec2(266, 100));
            path.push_back(Vec2(266, 98));
            path.push_back(Vec2(266, 96));
            path.push_back(Vec2(266, 95));
            path.push_back(Vec2(267, 94));
            path.push_back(Vec2(267, 92));
            path.push_back(Vec2(267, 91));
            path.push_back(Vec2(267, 89));
            path.push_back(Vec2(267, 87));
            path.push_back(Vec2(267, 86));
            path.push_back(Vec2(267, 85));
            path.push_back(Vec2(267, 84));
            path.push_back(Vec2(267, 84));
            path.push_back(Vec2(267, 84));
            path.push_back(Vec2(266, 83));
            path.push_back(Vec2(264, 83));
            path.push_back(Vec2(262, 83));
            path.push_back(Vec2(260, 83));
            path.push_back(Vec2(257, 83));
            path.push_back(Vec2(254, 83));
            path.push_back(Vec2(251, 83));
            path.push_back(Vec2(248, 83));
            path.push_back(Vec2(245, 83));
            path.push_back(Vec2(242, 82));
            path.push_back(Vec2(240, 82));
            path.push_back(Vec2(239, 82));
            path.push_back(Vec2(238, 82));
            path.push_back(Vec2(237, 81));
            path.push_back(Vec2(236, 81));

            return path;
        }

    };
}

#endif
