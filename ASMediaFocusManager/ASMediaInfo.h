//
//  ASMediaInfo.h
//  ASMediaFocusExemple
//
//  Created by Kevin Lundberg on 6/5/15.
//  Copyright (c) 2015 AutreSphere. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ASMediaInfo : NSObject

- (instancetype)initWithURL:(NSURL *)URL initialImage:(UIImage *)image;
- (instancetype)initWithURL:(NSURL *)URL initialImage:(UIImage *)image forceVideo:(BOOL)forceVideo;
- (instancetype)initWithURL:(NSURL *)URL initialImage:(UIImage *)image externalURL:(NSURL *)externalURL;
- (instancetype)initWithURL:(NSURL *)URL initialImage:(UIImage *)image externalURL:(NSURL *)externalURL overlayImage:(UIImage *)overlayImage;
- (instancetype)initWithURL:(NSURL *)URL initialImage:(UIImage *)image externalURL:(NSURL *)externalURL overlayImage:(UIImage *)overlayImage title:(NSString *)title;


/** the URL where the media (image or video) is stored. The URL may be local (file://) or distant (http://). */
@property (nonatomic, copy, readonly) NSURL *mediaURL;
/** determines whether the mediaURL will be treated as video */
@property (nonatomic, readonly) BOOL isVideo;
/** the URL where the external media (image or video) is stored. The URL may be local (file://) or distant (http://). */
@property (nonatomic, copy, readonly) NSURL *externalURL;
/** the title for this media view. Set to nil if you don't want any title to appear. */
@property (nonatomic, copy, readonly) NSString *title;
/** The initial image to display in the focus controller before the media URL's image/video is loaded. */
@property (nonatomic, strong, readonly) UIImage *initialImage;
/** the overlay image (e.g. video play icon) for this media view. Set to nil if you don't want any overlay image to appear. */
@property (nonatomic, copy, readonly) UIImage *overlayImage;
/** The content mode to use for the image view in the focus controller. Defaults to UIViewContentModeScaleAspectFit. */
@property (nonatomic, assign) UIViewContentMode contentMode;
/** Optional property to show a view pinned to the bottom of the focused area of the media. If present, this view is shown in place of the title. */
@property (nonatomic, strong) UIView *accessoryView;
/** Optional property to allow round-tripping of model info through the gallery. */
@property (nonatomic, assign) BOOL isYoutubeVideo;

@end
