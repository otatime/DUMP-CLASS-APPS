//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKComponent.h"

@interface FBCollageLayoutComponent : CKComponent
{
    vector_bf507950 _children;
    struct CGSize _innerPadding;
}

+ (id)newWithSize:(const struct CKComponentSize *)arg1 children:(const vector_bf507950 *)arg2 innerPadding:(struct CGSize)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createCollageItems:(vector_bf507950)arg1;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;

@end

