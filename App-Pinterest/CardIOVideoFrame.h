//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CardIOCardScanner, CardIOIplImage, CardIOReadCardInfo;

@interface CardIOVideoFrame : NSObject
{
    BOOL _focusOk;
    BOOL _focusSucks;
    BOOL _brightnessLow;
    BOOL _brightnessHigh;
    BOOL _foundTopEdge;
    BOOL _foundBottomEdge;
    BOOL _foundLeftEdge;
    BOOL _foundRightEdge;
    BOOL _flipped;
    BOOL _scanExpiry;
    BOOL _calculateBrightness;
    BOOL _torchIsOn;
    float _focusScore;
    float _brightnessScore;
    int _isoSpeed;
    float _shutterSpeed;
    CardIOIplImage *_ySample;
    CardIOIplImage *_cbSample;
    CardIOIplImage *_crSample;
    CardIOIplImage *_cardY;
    CardIOIplImage *_cardCb;
    CardIOIplImage *_cardCr;
    CardIOCardScanner *_scanner;
    CardIOReadCardInfo *_cardInfo;
    CDStruct_7a6dc4e9 *_dmz;
    int _detectionMode;
    struct opaqueCMSampleBuffer *_buffer;
    int _orientation;
    CDStruct_d006cd57 _corner_points;
    CDStruct_b2dfe295 _found_edges;
}

+ (id)filenameForImageEncodedUsingEncoding:(int)arg1;
@property(nonatomic) CDStruct_d006cd57 corner_points; // @synthesize corner_points=_corner_points;
@property(nonatomic) CDStruct_b2dfe295 found_edges; // @synthesize found_edges=_found_edges;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct opaqueCMSampleBuffer *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) int detectionMode; // @synthesize detectionMode=_detectionMode;
@property(nonatomic) BOOL torchIsOn; // @synthesize torchIsOn=_torchIsOn;
@property(nonatomic) BOOL calculateBrightness; // @synthesize calculateBrightness=_calculateBrightness;
@property CDStruct_7a6dc4e9 *dmz; // @synthesize dmz=_dmz;
@property(retain, nonatomic) CardIOReadCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(retain, nonatomic) CardIOCardScanner *scanner; // @synthesize scanner=_scanner;
@property(retain, nonatomic) CardIOIplImage *cardCr; // @synthesize cardCr=_cardCr;
@property(retain, nonatomic) CardIOIplImage *cardCb; // @synthesize cardCb=_cardCb;
@property(retain, nonatomic) CardIOIplImage *cardY; // @synthesize cardY=_cardY;
@property(retain, nonatomic) CardIOIplImage *crSample; // @synthesize crSample=_crSample;
@property(retain, nonatomic) CardIOIplImage *cbSample; // @synthesize cbSample=_cbSample;
@property(retain, nonatomic) CardIOIplImage *ySample; // @synthesize ySample=_ySample;
@property(nonatomic) float shutterSpeed; // @synthesize shutterSpeed=_shutterSpeed;
@property(nonatomic) int isoSpeed; // @synthesize isoSpeed=_isoSpeed;
@property(nonatomic) BOOL scanExpiry; // @synthesize scanExpiry=_scanExpiry;
@property(nonatomic) BOOL flipped; // @synthesize flipped=_flipped;
@property(nonatomic) BOOL foundRightEdge; // @synthesize foundRightEdge=_foundRightEdge;
@property(nonatomic) BOOL foundLeftEdge; // @synthesize foundLeftEdge=_foundLeftEdge;
@property(nonatomic) BOOL foundBottomEdge; // @synthesize foundBottomEdge=_foundBottomEdge;
@property(nonatomic) BOOL foundTopEdge; // @synthesize foundTopEdge=_foundTopEdge;
@property(nonatomic) BOOL brightnessHigh; // @synthesize brightnessHigh=_brightnessHigh;
@property(nonatomic) BOOL brightnessLow; // @synthesize brightnessLow=_brightnessLow;
@property(nonatomic) float brightnessScore; // @synthesize brightnessScore=_brightnessScore;
@property(nonatomic) BOOL focusSucks; // @synthesize focusSucks=_focusSucks;
@property(nonatomic) BOOL focusOk; // @synthesize focusOk=_focusOk;
@property(nonatomic) float focusScore; // @synthesize focusScore=_focusScore;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)encodedImageUsingEncoding:(int)arg1;
- (id)imageWithGrayscale:(BOOL)arg1;
- (unsigned int)numEdgesFound;
- (BOOL)foundAllEdges;
- (void)transformCbCrWithFrameOrientation:(unsigned char)arg1;
- (void)detectCardInSamplesWithFlip:(BOOL)arg1;
- (void)detectCardInSamples;
- (void)process;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 interfaceOrientation:(int)arg2;

@end

