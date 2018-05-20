/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 16, 2018 at 2:00:09 PM Central European Summer Time
* Operating System: Version 11.1.2 (Build 15B202)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, UIImageView, CCUICAPackageView, UIImage, UIColor, CCUICAPackageDescription, NSString;

@interface CCUIButtonModuleView : UIControl <UIGestureRecognizerDelegate> {

	UIView* _highlightedBackgroundView;
	UIImageView* _glyphImageView;
	CCUICAPackageView* _glyphPackageView;
	UIImage* _glyphImage;
	UIColor* _glyphColor;
	UIImage* _selectedGlyphImage;
	UIColor* _selectedGlyphColor;
	CCUICAPackageDescription* _glyphPackageDescription;
	NSString* _glyphState;
	NSDirectionalEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) UIImage * glyphImage;                                            //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                                            //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,retain) UIImage * selectedGlyphImage;                                    //@synthesize selectedGlyphImage=_selectedGlyphImage - In the implementation block
@property (nonatomic,retain) UIColor * selectedGlyphColor;                                    //@synthesize selectedGlyphColor=_selectedGlyphColor - In the implementation block
@property (nonatomic,retain) CCUICAPackageDescription * glyphPackageDescription;              //@synthesize glyphPackageDescription=_glyphPackageDescription - In the implementation block
@property (nonatomic,copy) NSString * glyphState;                                             //@synthesize glyphState=_glyphState - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentEdgeInsets;                       //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (readonly) NSUInteger hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setContentEdgeInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_handlePressGesture:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(NSDirectionalEdgeInsets)contentEdgeInsets;
-(UIImage *)glyphImage;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)setSelectedGlyphImage:(UIImage *)arg1 ;
-(UIImage *)selectedGlyphImage;
-(void)_updateForStateChange;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(void)setGlyphPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(void)setGlyphState:(NSString *)arg1 ;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(NSString *)glyphState;
-(void)setSelectedGlyphColor:(UIColor *)arg1 ;
-(UIColor *)selectedGlyphColor;
-(void)_setGlyphImage:(id)arg1 ;
-(void)_setGlyphPackageDescription:(id)arg1 ;
-(void)_setGlyphState:(id)arg1 ;
@end
