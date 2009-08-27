#ifdef WIN32
/*
 * While the definitions in the original header are technically the
 * same as the definitions in 'zlibDecls.h' on Windows they are not,
 * in a small detail: DLLEXPORT vs. DLLIMPORT. As our artificial
 * definitions do the right thing we use the macro definitions below
 * to move the original definitionsd out of the way. We do retain the
 * inclusion of all the type definitions, etc.
 */
#define TIFFGetVersion	__mask_TIFFGetVersion
#define TIFFFindCODEC	__mask_TIFFFindCODEC
#define TIFFRegisterCODEC	__mask_TIFFRegisterCODEC
#define TIFFUnRegisterCODEC	__mask_TIFFUnRegisterCODEC
#define _TIFFmalloc	__mask__TIFFmalloc
#define _TIFFrealloc	__mask__TIFFrealloc
#define _TIFFmemset	__mask__TIFFmemset
#define _TIFFmemcpy	__mask__TIFFmemcpy
#define _TIFFmemcmp	__mask__TIFFmemcmp
#define _TIFFfree	__mask__TIFFfree
#define TIFFClose	__mask_TIFFClose
#define TIFFFlush	__mask_TIFFFlush
#define TIFFFlushData	__mask_TIFFFlushData
#define TIFFGetField	__mask_TIFFGetField
#define TIFFVGetField	__mask_TIFFVGetField
#define TIFFGetFieldDefaulted	__mask_TIFFGetFieldDefaulted
#define TIFFVGetFieldDefaulted	__mask_TIFFVGetFieldDefaulted
#define TIFFReadDirectory	__mask_TIFFReadDirectory
#define TIFFScanlineSize	__mask_TIFFScanlineSize
#define TIFFRasterScanlineSize	__mask_TIFFRasterScanlineSize
#define TIFFStripSize	__mask_TIFFStripSize
#define TIFFVStripSize	__mask_TIFFVStripSize
#define TIFFTileRowSize	__mask_TIFFTileRowSize
#define TIFFTileSize	__mask_TIFFTileSize
#define TIFFVTileSize	__mask_TIFFVTileSize
#define TIFFDefaultStripSize	__mask_TIFFDefaultStripSize
#define TIFFDefaultTileSize	__mask_TIFFDefaultTileSize
#define TIFFFileno	__mask_TIFFFileno
#define TIFFGetMode	__mask_TIFFGetMode
#define TIFFIsTiled	__mask_TIFFIsTiled
#define TIFFIsByteSwapped	__mask_TIFFIsByteSwapped
#define TIFFIsUpSampled	__mask_TIFFIsUpSampled
#define TIFFIsMSB2LSB	__mask_TIFFIsMSB2LSB
#define TIFFCurrentRow	__mask_TIFFCurrentRow
#define TIFFCurrentDirectory	__mask_TIFFCurrentDirectory
#define TIFFNumberOfDirectories	__mask_TIFFNumberOfDirectories
#define TIFFCurrentDirOffset	__mask_TIFFCurrentDirOffset
#define TIFFCurrentStrip	__mask_TIFFCurrentStrip
#define TIFFCurrentTile	__mask_TIFFCurrentTile
#define TIFFReadBufferSetup	__mask_TIFFReadBufferSetup
#define TIFFWriteBufferSetup	__mask_TIFFWriteBufferSetup
#define TIFFWriteCheck	__mask_TIFFWriteCheck
#define TIFFCreateDirectory	__mask_TIFFCreateDirectory
#define TIFFLastDirectory	__mask_TIFFLastDirectory
#define TIFFSetDirectory	__mask_TIFFSetDirectory
#define TIFFSetSubDirectory	__mask_TIFFSetSubDirectory
#define TIFFUnlinkDirectory	__mask_TIFFUnlinkDirectory
#define TIFFSetField	__mask_TIFFSetField
#define TIFFVSetField	__mask_TIFFVSetField
#define TIFFWriteDirectory	__mask_TIFFWriteDirectory
#define TIFFReassignTagToIgnore	__mask_TIFFReassignTagToIgnore
#define TIFFPrintDirectory	__mask_TIFFPrintDirectory
#define TIFFReadScanline	__mask_TIFFReadScanline
#define TIFFWriteScanline	__mask_TIFFWriteScanline
#define TIFFReadRGBAImage	__mask_TIFFReadRGBAImage
#define TIFFReadRGBAStrip	__mask_TIFFReadRGBAStrip
#define TIFFReadRGBATile	__mask_TIFFReadRGBATile
#define TIFFRGBAImageOK	__mask_TIFFRGBAImageOK
#define TIFFRGBAImageBegin	__mask_TIFFRGBAImageBegin
#define TIFFRGBAImageGet	__mask_TIFFRGBAImageGet
#define TIFFRGBAImageEnd	__mask_TIFFRGBAImageEnd
#define TIFFOpen	__mask_TIFFOpen
#define TIFFFdOpen	__mask_TIFFFdOpen
#define TIFFClientOpen	__mask_TIFFClientOpen
#define TIFFFileName	__mask_TIFFFileName
#define TIFFError	__mask_TIFFError
#define TIFFWarning	__mask_TIFFWarning
#define TIFFSetErrorHandler	__mask_TIFFSetErrorHandler
#define TIFFSetWarningHandler	__mask_TIFFSetWarningHandler
#define TIFFSetTagExtender	__mask_TIFFSetTagExtender
#define TIFFComputeTile	__mask_TIFFComputeTile
#define TIFFCheckTile	__mask_TIFFCheckTile
#define TIFFNumberOfTiles	__mask_TIFFNumberOfTiles
#define TIFFReadTile	__mask_TIFFReadTile
#define TIFFWriteTile	__mask_TIFFWriteTile
#define TIFFComputeStrip	__mask_TIFFComputeStrip
#define TIFFNumberOfStrips	__mask_TIFFNumberOfStrips
#define TIFFReadEncodedStrip	__mask_TIFFReadEncodedStrip
#define TIFFReadRawStrip	__mask_TIFFReadRawStrip
#define TIFFReadEncodedTile	__mask_TIFFReadEncodedTile
#define TIFFReadRawTile	__mask_TIFFReadRawTile
#define TIFFWriteEncodedStrip	__mask_TIFFWriteEncodedStrip
#define TIFFWriteRawStrip	__mask_TIFFWriteRawStrip
#define TIFFWriteEncodedTile	__mask_TIFFWriteEncodedTile
#define TIFFWriteRawTile	__mask_TIFFWriteRawTile
#define TIFFSetWriteOffset	__mask_TIFFSetWriteOffset
#define TIFFSwabShort	__mask_TIFFSwabShort
#define TIFFSwabLong	__mask_TIFFSwabLong
#define TIFFSwabDouble	__mask_TIFFSwabDouble
#define TIFFSwabArrayOfShort	__mask_TIFFSwabArrayOfShort
#define TIFFSwabArrayOfLong	__mask_TIFFSwabArrayOfLong
#define TIFFSwabArrayOfDouble	__mask_TIFFSwabArrayOfDouble
#define TIFFReverseBits	__mask_TIFFReverseBits
#define TIFFGetBitRevTable	__mask_TIFFGetBitRevTable
#define TIFFPredictorInit	__mask_TIFFPredictorInit
#define _TIFFSetupFieldInfo	__mask__TIFFSetupFieldInfo
#define TIFFMergeFieldInfo	__mask__TIFFMergeFieldInfo
#define _TIFFPrintFieldInfo	__mask__TIFFPrintFieldInfo
#define TIFFFindFieldInfo	__mask__TIFFFindFieldInfo
#define TIFFFieldWithTag	__mask__TIFFFieldWithTag
#define _TIFFSampleToTagType	__mask__TIFFSampleToTagType
#define _TIFFgetMode	__mask__TIFFgetMode
#define _TIFFNoRowEncode	__mask__TIFFNoRowEncode
#define _TIFFNoStripEncode	__mask__TIFFNoStripEncode
#define _TIFFNoTileEncode	__mask__TIFFNoTileEncode
#define _TIFFNoRowDecode	__mask__TIFFNoRowDecode
#define _TIFFNoStripDecode	__mask__TIFFNoStripDecode
#define _TIFFNoTileDecode	__mask__TIFFNoTileDecode
#define _TIFFNoPostDecode	__mask__TIFFNoPostDecode
#define _TIFFNoPreCode	__mask__TIFFNoPreCode
#define _TIFFNoSeek	__mask__TIFFNoSeek
#define _TIFFSwab16BitData	__mask__TIFFSwab16BitData
#define _TIFFSwab32BitData	__mask__TIFFSwab32BitData
#define _TIFFSwab64BitData	__mask__TIFFSwab64BitData
#define TIFFFlushData1	__mask_TIFFFlushData1
#define TIFFFreeDirectory	__mask_TIFFFreeDirectory
#define TIFFDefaultDirectory	__mask_TIFFDefaultDirectory
#define TIFFSetCompressionScheme	__mask_TIFFSetCompressionScheme
#define TIFFSetDefaultCompressionState	__mask_TIFFSetDefaultCompressionState
#define _TIFFSetDefaultCompressionState	__mask__TIFFSetDefaultCompressionState
#define _TIFFDefaultStripSize	__mask__TIFFDefaultStripSize
#define _TIFFDefaultTileSize	__mask__TIFFDefaultTileSize
#define _TIFFsetByteArray	__mask__TIFFsetByteArray
#define _TIFFsetString	__mask__TIFFsetString
#define _TIFFsetShortArray	__mask__TIFFsetShortArray
#define _TIFFsetLongArray	__mask__TIFFsetLongArray
#define _TIFFsetFloatArray	__mask__TIFFsetFloatArray
#define _TIFFsetDoubleArray	__mask__TIFFsetDoubleArray
#define _TIFFprintAscii	__mask__TIFFprintAscii
#define _TIFFprintAsciiTag	__mask__TIFFprintAsciiTag
#define TIFFInitDumpMode	__mask_TIFFInitDumpMode
#define TIFFInitPackBits	__mask_TIFFInitPackBits
#define TIFFInitCCITTRLE	__mask_TIFFInitCCITTRLE
#define TIFFInitCCITTRLEW	__mask_TIFFInitCCITTRLEW
#define TIFFInitCCITTFax3	__mask_TIFFInitCCITTFax3
#define TIFFInitCCITTFax4	__mask_TIFFInitCCITTFax4
#define TIFFInitThunderScan	__mask_TIFFInitThunderScan
#define TIFFInitNeXT	__mask_TIFFInitNeXT
#define TIFFInitLZW	__mask_TIFFInitLZW
#define TIFFInitOJPEG	__mask_TIFFInitOJPEG
#define TIFFInitJPEG	__mask_TIFFInitJPEG
#define TIFFInitJBIG	__mask_TIFFInitJBIG
#define TIFFInitZIP	__mask_TIFFInitZIP
#define TIFFInitPixarLog	__mask_TIFFInitPixarLog
#define TIFFInitSGILog	__mask_TIFFInitSGILog
#endif /* WIN32 */
