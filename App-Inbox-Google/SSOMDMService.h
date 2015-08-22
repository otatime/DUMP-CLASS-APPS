//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SSOMDMService : NSObject
{
    BOOL _errorDialogVisible;
    CDUnknownBlockType _errorDidDismissBlock;
}

+ (id)firstErrorDictionaryFromError:(id)arg1;
+ (BOOL)isMDMErrorDict:(id)arg1;
+ (BOOL)isMDMError:(id)arg1;
@property(nonatomic, getter=isErrorDialogVisible) BOOL errorDialogVisible; // @synthesize errorDialogVisible=_errorDialogVisible;
@property(copy, nonatomic) CDUnknownBlockType errorDidDismissBlock; // @synthesize errorDidDismissBlock=_errorDidDismissBlock;
- (void).cxx_destruct;
- (BOOL)errorDialogDidDismiss:(id)arg1;
- (void)displayMDMErrorInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
