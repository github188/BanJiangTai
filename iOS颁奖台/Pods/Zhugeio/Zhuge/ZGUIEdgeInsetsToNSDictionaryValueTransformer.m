//
// Copyright (c) 2014 Zhuge. All rights reserved.

#import "ZGValueTransformers.h"

@implementation ZGUIEdgeInsetsToNSDictionaryValueTransformer

+ (Class)transformedValueClass
{
    return [NSDictionary class];
}

+ (BOOL)allowsReverseTransformation
{
    return YES;
}

- (id)transformedValue:(id)value
{
    if ([value respondsToSelector:@selector(UIEdgeInsetsValue)]) {
        UIEdgeInsets edgeInsetsValue = [value UIEdgeInsetsValue];

        return @{
            @"top"    : @(edgeInsetsValue.top),
            @"bottom" : @(edgeInsetsValue.bottom),
            @"left"   : @(edgeInsetsValue.left),
            @"right"  : @(edgeInsetsValue.right)
        };
    }

    return nil;
}

- (id)reverseTransformedValue:(id)value
{
    if ([value isKindOfClass:[NSDictionary class]]) {
        NSDictionary *dictionaryValue = value;

        id top = dictionaryValue[@"top"];
        id bottom = dictionaryValue[@"bottom"];
        id left = dictionaryValue[@"left"];
        id right = dictionaryValue[@"right"];

        if (top && bottom && left && right) {
            UIEdgeInsets edgeInsets = UIEdgeInsetsMake([top floatValue], [left floatValue], [bottom floatValue], [right floatValue]);
            return [NSValue valueWithUIEdgeInsets:edgeInsets];
        }
    }

    return [NSValue valueWithUIEdgeInsets:UIEdgeInsetsZero];
}


@end
