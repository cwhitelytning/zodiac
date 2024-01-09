#include "instruction_reader.h"

void instruction_reader_init(instruction_reader_t *reader, void *sender,
                             instruction_reader_read_callback_t read_callback,
                             instruction_reader_seek_callback_t seek_callback,
                             instruction_reader_tell_callback_t tell_callback) {

    reader->sender = sender;
    reader->read_callback = read_callback;
    reader->seek_callback = seek_callback;
    reader->tell_callback = tell_callback;
}

instruction_reader_read_error_t instruction_reader_read(instruction_reader_t *reader,
                                                        instruction_t *instruction) {

    return reader->read_callback(reader->sender, instruction);
}

void instruction_reader_seek(instruction_reader_t *reader,
                             instruction_reader_offset_t offset,
                             instruction_reader_seek_mode_t mode) {

    reader->seek_callback(reader->sender, offset, mode);
}

instruction_reader_offset_t instruction_reader_tell(instruction_reader_t *reader) {
    return reader->tell_callback(reader->sender);
}
